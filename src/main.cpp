#include <Arduino.h>

#define SOIL_PIN 34
#define RELAY_PIN 26

#define RELAY_ON LOW
#define RELAY_OFF HIGH

int moistureValue = 0;
int dryThreshold = 2500;

void setup() {
  Serial.begin(115200);

  pinMode(SOIL_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, RELAY_OFF);

  Serial.println("Smart Irrigation System Started");

  // Relay test
  Serial.println("Testing Relay...");

  digitalWrite(RELAY_PIN, RELAY_ON);
  Serial.println("Pump ON");
  delay(3000);

  digitalWrite(RELAY_PIN, RELAY_OFF);
  Serial.println("Pump OFF");
  delay(1000);

  Serial.println("Starting Soil Monitoring...");
}

void loop() {

  moistureValue = analogRead(SOIL_PIN);

  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  if (moistureValue > dryThreshold) {
    digitalWrite(RELAY_PIN, RELAY_ON);
    Serial.println("Soil is DRY - Pump ON");
  }
  else {
    digitalWrite(RELAY_PIN, RELAY_OFF);
    Serial.println("Soil is WET - Pump OFF");
  }

  Serial.println("------------------------");

  delay(1000);
}