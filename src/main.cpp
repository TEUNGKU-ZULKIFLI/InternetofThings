#include <Arduino.h>

#define LED_EKSTERNAL D1 // Pin D1 (GPIO5)

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("\nFase 2.A: Tes LED Eksternal (Indra Penglihatan)");

  // Set kedua LED sebagai OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_EKSTERNAL, OUTPUT); 
}

void loop() {
  Serial.println("LED Eksternal Nyala, LED Internal Mati");
  digitalWrite(LED_EKSTERNAL, HIGH); // LED Eksternal nyala di HIGH
  digitalWrite(LED_BUILTIN, HIGH);   // LED Internal mati di HIGH

  delay(1000);

  Serial.println("LED Eksternal Mati, LED Internal Nyala");
  digitalWrite(LED_EKSTERNAL, LOW);  // LED Eksternal mati di LOW
  digitalWrite(LED_BUILTIN, LOW);    // LED Internal nyala di LOW
  
  delay(1000);
}