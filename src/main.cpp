#include <Arduino.h>
#include <stdio.h>

// put function declarations here:
void flashRGB(int ms);

void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // loop() is called repeatedly by Arduino framework
  if (Serial.available() > 0) {
    (void)Serial.read(); // consume the incoming byte
    flashRGB(100);
  }
}

// put function definitions here:
void flashRGB(int ms) {
  digitalWrite(6, HIGH); // R
  digitalWrite(7, HIGH); // G
  digitalWrite(8, HIGH); // B
  delay(ms);
  digitalWrite(6, HIGH); // R
  digitalWrite(7, LOW);  // G
  digitalWrite(8, HIGH); // B
  delay(ms);
  digitalWrite(6, HIGH); // R
  digitalWrite(7, HIGH); // G
  digitalWrite(8, LOW);  // B
  delay(ms);
  digitalWrite(6, LOW);  // R
  digitalWrite(7, HIGH); // G
  digitalWrite(8, HIGH); // B
  delay(ms);
  digitalWrite(6, LOW);  // R
  digitalWrite(7, LOW);  // G
  digitalWrite(8, HIGH); // B
  delay(ms);
  digitalWrite(6, LOW);  // R
  digitalWrite(7, HIGH); // G
  digitalWrite(8, LOW);  // B
  delay(ms);
  digitalWrite(6, HIGH); // R
  digitalWrite(7, LOW);  // G
  digitalWrite(8, LOW);  // B
  delay(ms);
  digitalWrite(6, LOW); // R
  digitalWrite(7, LOW);  // G
  digitalWrite(8, LOW);  // B
}