#include <Arduino.h>

// Di board Lolin D1 R1, LED_BUILTIN terhubung ke pin D4 (GPIO2)
// Kita bisa pakai konstanta LED_BUILTIN karena kita sudah menentukan
// 'board = lolin_d1_r1' di platformio.ini

void setup() {
  Serial.begin(115200);
  delay(1000); 
  Serial.println("\n\n--- TEST ---");
  Serial.println("Fase 1, Langkah 4: Tes LED Internal.");

  // Set pin LED sebagai OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("LED D4 (LED_BUILTIN) diset sebagai OUTPUT.");
}

void loop() {
  Serial.println("LED Nyala!");
  digitalWrite(LED_BUILTIN, LOW);   // LED internal Wemos/Lolin nyala saat LOW
  delay(1000);                     // Tunggu 1 detik

  Serial.println("LED Mati!");
  digitalWrite(LED_BUILTIN, HIGH);  // LED internal Wemos/Lolin mati saat HIGH
  delay(1000);                     // Tunggu 1 detik
}