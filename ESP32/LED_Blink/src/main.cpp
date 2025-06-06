#include <Arduino.h>



// Define constants
const int LED_PIN = 4;

// Define variables


// put function declarations here:

void setup() {
  Serial.begin(112500);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Blink the LED
  digitalWrite(LED_PIN, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(1000);                   // Wait for a second
  digitalWrite(LED_PIN, LOW);    // Turn the LED off by making the voltage LOW
  delay(1000);                   // Wait for a second


}

