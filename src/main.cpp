#include <Arduino.h>

void setup() {
  // Buka jalur komunikasi serial di 115200 bps
  Serial.begin(115200);

  // Beri jeda 1 detik agar serial monitor siap
  delay(1000); 

  Serial.println("\n\n--- TEST ---");
  Serial.println("Halo dari Lolin D1 R1!");
  Serial.println("Fase 1, Langkah 2: Serial Monitor OK.");
  Serial.println("Board sudah bangun dan siap menerima perintah.");
}

void loop() {
  // Biarkan kosong dulu. Kita hanya ingin tes setup.
}