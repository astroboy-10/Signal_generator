// Signal Generator - V1
// Author: Gaurav Kumar
// Date: July 2025

const int outputPin = 9;  // Digital pin for square wave output
unsigned long frequency = 1000;  // Default frequency in Hz
unsigned long halfPeriodMicros;

void setup() {
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
  calculateHalfPeriod();
  Serial.println("Signal Generator Started - Square Wave Mode");
}

void loop() {
  // Generate square wave
  digitalWrite(outputPin, HIGH);
  delayMicroseconds(halfPeriodMicros);
  digitalWrite(outputPin, LOW);
  delayMicroseconds(halfPeriodMicros);

  // Optional: Listen for serial input to change frequency
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    frequency = input.toInt();
    calculateHalfPeriod();
    Serial.print("Frequency set to: ");
    Serial.println(frequency);
  }
}

void calculateHalfPeriod() {
  halfPeriodMicros = 500000 / frequency;  // (1,000,000 / 2) / frequency
}
